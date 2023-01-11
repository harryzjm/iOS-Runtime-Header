//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HMDDataStreamTransportSupportedConfiguration : NSObject <NSCopying>
{
    NSMutableArray *_configurations;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableArray *configurations; // @synthesize configurations=_configurations;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithConfigurations:(id)arg1;
- (id)init;

@end

