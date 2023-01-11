//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AVAudioSessionRouteDescription : NSObject
{
    void *_impl;
}

- (id)initWithRawDescription:(id)arg1 owningSession:(id)arg2;
- (id)initWithCategory:(id)arg1 owningSession:(id)arg2;
- (struct RouteDescriptionImpl *)privateGetImplementation;
- (id)description;
@property(readonly, nonatomic) NSArray *outputs;
@property(readonly, nonatomic) NSArray *inputs;
- (_Bool)isEqualToRoute:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly) _Bool supportsSoftwareVolume;
@property(readonly) _Bool supportsDoAP;
@property(readonly) unsigned long long siriInputSource;
@property(readonly) NSString *siriRemoteInputIdentifier;

@end
