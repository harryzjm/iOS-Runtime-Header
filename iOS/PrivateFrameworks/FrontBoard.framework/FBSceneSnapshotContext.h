//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class BSSettings, FBSSceneSettings, NSDate, NSSet, NSString;

@interface FBSceneSnapshotContext : NSObject <BSDescriptionProviding>
{
    NSString *_sceneID;
    struct CGRect _frame;
    _Bool _opaque;
    NSSet *_layersToExclude;
    FBSSceneSettings *_settings;
    long long _orientation;
    NSDate *_expirationDate;
    double _scale;
    BSSettings *_clientExtendedData;
}

+ (id)contextWithFBSContext:(id)arg1;
@property(copy, nonatomic) BSSettings *clientExtendedData; // @synthesize clientExtendedData=_clientExtendedData;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSSet *layersToExclude; // @synthesize layersToExclude=_layersToExclude;
@property(copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithFBSContext:(id)arg1;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

