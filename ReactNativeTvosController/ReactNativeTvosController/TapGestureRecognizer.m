//
//  TapGestureRecognizer.m
//  ReactNativeTvosController
//
//  Created by Radek Zmeskal on 05/12/2017.
//  Copyright © 2017 yangchen. All rights reserved.
//

#import "TapGestureRecognizer.h"

@implementation TapGestureRecognizer

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
  self.state = UIGestureRecognizerStateFailed;
  [self.delegateTap tap];
}

-(void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{    
    self.state = UIGestureRecognizerStateEnded;
}

@end
