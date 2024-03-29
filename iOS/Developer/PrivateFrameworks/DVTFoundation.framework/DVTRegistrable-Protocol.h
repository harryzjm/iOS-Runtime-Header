//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTVersion, NSArray, NSString;

@protocol DVTRegistrable <NSObject>
@property(readonly) NSString *identifier;

@optional
@property(readonly) NSString *displayDescription;
@property(readonly) NSString *displayName;
@property(readonly) DVTVersion *version;
@property(readonly) NSArray *aliases;
@end

