//
//  SipUtils.h
//  ChineseTelephone
//
//  Created by Ares on 13-6-7.
//  Copyright (c) 2013年 richitec. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ISipProtocol.h"

#import "PJSipImplementation.h"

#import "SipRegistrationBean.h"

#import "SipRegistrationStateChangedProtocol.h"

#import "SipCallMode.h"

@interface SipUtils : NSObject

// get sip implementation
+ (id<ISipProtocol>)getSipImplementation;

// register sip account
+ (void)registerSipAccount:(SipRegistrationBean *)sipAccount stateChangedProtocolImpl:(id<SipRegistrationStateChangedProtocol>)stateChangedProtocolImpl;

// unregister sip account
+ (void)unregisterSipAccount:(id<SipRegistrationStateChangedProtocol>)stateChangedProtocolImpl;

// make sip voice call
+ (void)makeSipVoiceCall:(NSString *)callee phone:(NSString *)phone callMode:(SipCallMode)callMode;

// destroy sip engine
+ (void)destroySipEngine;

@end
