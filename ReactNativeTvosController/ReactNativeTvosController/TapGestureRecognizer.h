//
//  TapGestureRecognizer.h
//  ReactNativeTvosController
//
//  Created by Radek Zmeskal on 05/12/2017.
//  Copyright © 2017 yangchen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIGestureRecognizerSubclass.h>

@protocol TapGestureRecognizerDelegate <NSObject>
@optional
- (void)tap;
@end

@interface TapGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic, weak) id <TapGestureRecognizerDelegate> delegateTap;


@end
