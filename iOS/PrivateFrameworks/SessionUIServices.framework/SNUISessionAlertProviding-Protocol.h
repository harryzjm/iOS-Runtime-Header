//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SessionUIServices/NSObject-Protocol.h>

@class NSString, SNUISessionAlertOptions;

@protocol SNUISessionAlertProviding <NSObject>
@property(readonly, nonatomic) SNUISessionAlertOptions *options;
@property(readonly, nonatomic) long long action;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier;
@end

