//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface RCSavedRecordingsModelChangeContext : NSObject
{
    NSArray *_insertedObjects;
    NSArray *_updatedObjects;
    NSArray *_deletedObjects;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *deletedObjects; // @synthesize deletedObjects=_deletedObjects;
@property(readonly, copy, nonatomic) NSArray *updatedObjects; // @synthesize updatedObjects=_updatedObjects;
@property(readonly, copy, nonatomic) NSArray *insertedObjects; // @synthesize insertedObjects=_insertedObjects;
- (id)deletedRecordingURIsIncludingTemporaryURIs:(_Bool)arg1;
- (id)updatedRecordingURIsIncludingTemporaryURIs:(_Bool)arg1;
- (id)insertedRecordingURIsIncludingTemporaryURIs:(_Bool)arg1;
- (id)_recordingURIsInArray:(id)arg1 includeTemporaryURIs:(_Bool)arg2;
- (id)initWithStateFromManagedObjectContext:(id)arg1;

@end
