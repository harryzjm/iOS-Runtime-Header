//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol BMStoreData <NSObject>
+ (id)eventWithData:(NSData *)arg1 dataVersion:(unsigned int)arg2;
- (NSData *)serialize;
@property(nonatomic, readonly) unsigned int dataVersion;

@optional
- (NSDictionary *)jsonDict;
- (NSData *)json;
@end

