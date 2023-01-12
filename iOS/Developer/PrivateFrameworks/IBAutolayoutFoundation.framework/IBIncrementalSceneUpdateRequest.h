//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBSceneUpdateProcessingRequestGroup, NSString;

@interface IBIncrementalSceneUpdateRequest : NSObject
{
    NSString *_identifier;
    IBSceneUpdateProcessingRequestGroup *_processingRequestGroup;
    NSString *_incrementalUpdateSessionID;
}

+ (id)request;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *incrementalUpdateSessionID; // @synthesize incrementalUpdateSessionID=_incrementalUpdateSessionID;
@property(readonly, nonatomic) IBSceneUpdateProcessingRequestGroup *processingRequestGroup; // @synthesize processingRequestGroup=_processingRequestGroup;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)visitWithFullRequestBlock:(CDUnknownBlockType)arg1 incrementalRequestBlock:(CDUnknownBlockType)arg2;
- (void)configureWithConfigurer:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

