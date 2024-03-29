//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaCollection.h"

@class VUITVSeriesManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandSeriesMediaCollection : VUIMediaCollection
{
    VUITVSeriesManagedObject *_seriesManagedObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUITVSeriesManagedObject *seriesManagedObject; // @synthesize seriesManagedObject=_seriesManagedObject;
- (id)seasonCount;
- (id)title;
- (id)showIdentifier;
- (id)isLocal;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)canonicalID;
- (id)initWithMediaLibrary:(id)arg1 seriesManagedObject:(id)arg2 requestedProperties:(id)arg3;

@end

