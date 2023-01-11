//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResource-Protocol.h>

@class AVTUIEnvironment, NSString;
@protocol AVTAvatarRecord;

@interface AVTAvatarRecordCacheableResource : NSObject <AVTCacheableResource>
{
    id <AVTAvatarRecord> _record;
    AVTUIEnvironment *_environment;
}

+ (id)persistentIdentifierPrefixForRecordWithIdentifier:(id)arg1;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTAvatarRecord> record; // @synthesize record=_record;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tokenForObservingChangesWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)requiresEncryption;
- (unsigned long long)costForScope:(id)arg1;
- (id)identifierForScope:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;
- (id)initWithAvatarRecord:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

