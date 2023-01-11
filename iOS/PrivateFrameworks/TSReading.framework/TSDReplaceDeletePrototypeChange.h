//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDPrototypeChange-Protocol.h>

@class NSString;
@protocol TSSPropertySource;

@interface TSDReplaceDeletePrototypeChange : NSObject <TSDPrototypeChange>
{
    _Bool mPrototypeIsBeingReplaced;
    _Bool mPrototypeIsBeingDeleted;
    id mReplacement;
    id mPrototype;
}

@property(readonly, retain) id prototype; // @synthesize prototype=mPrototype;
@property(readonly, retain) id replacement; // @synthesize replacement=mReplacement;
@property(readonly) _Bool prototypeIsBeingDeleted; // @synthesize prototypeIsBeingDeleted=mPrototypeIsBeingDeleted;
@property(readonly) _Bool prototypeIsBeingReplaced; // @synthesize prototypeIsBeingReplaced=mPrototypeIsBeingReplaced;
- (_Bool)propertiesAreChanging:(id)arg1;
- (_Bool)propertyIsChanging:(int)arg1;
@property(readonly, retain) id <TSSPropertySource> propertiesAfterChange;
@property(readonly, retain) id <TSSPropertySource> propertiesBeforeChange;
- (id)changedPropertySet;
@property(readonly) _Bool prototypeIsBeingModified;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initDeletePrototypeChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (id)initReplacePrototypeChangeForPrototype:(id)arg1 toReplacement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

