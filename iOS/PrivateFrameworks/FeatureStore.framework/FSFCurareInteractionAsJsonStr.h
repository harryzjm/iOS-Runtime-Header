//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FeatureStore/FSFCurareInteraction-Protocol.h>

@class NSString;

@interface FSFCurareInteractionAsJsonStr : NSObject <FSFCurareInteraction>
{
    NSString *_content;
    NSString *_interactionId;
    unsigned int _dataVersion;
}

+ (id)deserialize:(id)arg1 dataVersion:(unsigned int)arg2 interactionId:(id)arg3;
- (void).cxx_destruct;
- (id)serialize;
- (id)json;
- (id)initWithJsonStr:(id)arg1 interactionId:(id)arg2 dataVersion:(unsigned int)arg3;
@property(readonly, nonatomic) NSString *interactionId;
@property(readonly, nonatomic) unsigned int dataVersion;

@end
