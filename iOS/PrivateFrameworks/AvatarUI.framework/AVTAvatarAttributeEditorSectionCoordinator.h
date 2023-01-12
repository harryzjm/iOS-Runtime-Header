//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorControllerSubSelectionDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate;

@interface AVTAvatarAttributeEditorSectionCoordinator : NSObject <AVTAvatarAttributeEditorControllerSubSelectionDelegate>
{
    id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> _delegate;
    NSMutableDictionary *_sectionControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(nonatomic) __weak id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1;
- (void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2;
- (void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2;
- (void)attributeEditorSectionController:(id)arg1 didDeleteSectionItems:(id)arg2;
- (void)removeSectionController:(id)arg1;
- (void)addSectionController:(id)arg1;
- (_Bool)isCoordinatingForSectionController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
