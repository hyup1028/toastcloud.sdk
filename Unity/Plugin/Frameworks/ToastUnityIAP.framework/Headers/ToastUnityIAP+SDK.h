//
//  ToastUnityIAP+SDK.h
//  ToastUnityIAP
//
//  Created by JooHyun Lee on 2018. 11. 9..
//  Copyright © 2018년 NHNEnt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ToastUnityCore/ToastUnityCore.h>
#import <ToastIAP/ToastIAP.h>

@interface ToastUnityIAP : NSObject <ToastUnityModule>

+ (void)registerActions;

+ (NSString *)version;

@end
