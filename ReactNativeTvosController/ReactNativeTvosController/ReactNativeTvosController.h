//
//  ReactNativeTvosController.h
//  ReactNativeTvosController
//
//  Created by yangchen on 2017/1/29.
//  Copyright © 2017年 yangchen. All rights reserved.
//

#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
#import "TapGestureRecognizer.h"

@interface ReactNativeTvosController : RCTEventEmitter <RCTBridgeModule, TapGestureRecognizerDelegate, UIGestureRecognizerDelegate>

@end
