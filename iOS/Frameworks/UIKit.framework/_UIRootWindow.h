//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _UIRootWindow
{
    double _scale;
}

- (void)_noteScreenDidChangeMode:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (_Bool)_transformLayerIncludesScreenRotation;
- (void)_configureContextOptions:(id)arg1;
- (CDStruct_3cbf53c3)_bindingDescription;
- (_Bool)_touchesInsideShouldHideCalloutBar;
- (_Bool)_isConstrainedByScreenJail;
- (_Bool)_isWindowServerHostingManaged;
- (_Bool)_wantsSceneAssociation;
- (id)_context;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;

@end

