//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TKTokenWatcherTokenInfo : NSObject
{
    NSString *_tokenID;
    NSString *_driverName;
    NSString *_slotName;
}

@property(readonly, nonatomic) NSString *slotName; // @synthesize slotName=_slotName;
@property(readonly, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(readonly, nonatomic) NSString *tokenID; // @synthesize tokenID=_tokenID;
- (void).cxx_destruct;
- (id)initWithTokenInfo:(id)arg1;

@end
