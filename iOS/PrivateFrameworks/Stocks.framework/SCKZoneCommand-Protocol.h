//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Stocks/NSObject-Protocol.h>
#import <Stocks/NSSecureCoding-Protocol.h>

@protocol SCKZoneModifying;

@protocol SCKZoneCommand <NSObject, NSSecureCoding>
- (void)executeWithZone:(id <SCKZoneModifying>)arg1;

@optional
- (_Bool)shouldDeferUpload;
@end

