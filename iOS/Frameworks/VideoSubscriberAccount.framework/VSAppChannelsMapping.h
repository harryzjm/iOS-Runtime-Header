//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSAppChannelsMapping : NSObject
{
    NSString *_appAdamID;
    NSArray *_channelIDs;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *channelIDs; // @synthesize channelIDs=_channelIDs;
@property(copy, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

