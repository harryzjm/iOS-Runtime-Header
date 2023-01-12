//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaCollection.h"

@class VUITVSeasonManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandSeasonMediaCollection : VUIMediaCollection
{
    VUITVSeasonManagedObject *_seasonManagedObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUITVSeasonManagedObject *seasonManagedObject; // @synthesize seasonManagedObject=_seasonManagedObject;
- (id)title;
- (id)seasonNumber;
- (id)showIdentifier;
- (id)isLocal;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)canonicalID;
- (id)initWithMediaLibrary:(id)arg1 seasonManagedObject:(id)arg2 requestedProperties:(id)arg3;

@end

