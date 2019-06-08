//
//  RNTensirIO.h
//  RNTensorIO
//
//  Created by Phil Dow on 2/1/19.
//  Copyright © 2019 doc.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

//#if __has_include("RCTBridgeModule.h")
//#import "RCTBridgeModule.h"
//#else
//#import <React/RCTBridgeModule.h>
//#endif

#if __has_include("RCTConvert.h")
#import "RCTConvert.h"
#else
#import <React/RCTConvert.h>
#endif

#if __has_include("RCTEventEmitter.h")
#import "RCTEventEmitter.h"
#else
#import <React/RCTEventEmitter.h>
#endif

@interface RNFleaClient : RCTEventEmitter <RCTBridgeModule>

@end

