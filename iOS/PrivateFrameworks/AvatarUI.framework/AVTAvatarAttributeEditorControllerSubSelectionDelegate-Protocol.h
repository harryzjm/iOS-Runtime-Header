//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTAvatarAttributeEditorSectionController, AVTAvatarAttributeEditorSectionItem;

@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate <NSObject>
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id <AVTAvatarAttributeEditorSectionController>)arg1;
- (void)attributeEditorSectionController:(id <AVTAvatarAttributeEditorSectionController>)arg1 didUpdateSectionItem:(id <AVTAvatarAttributeEditorSectionItem>)arg2;
- (void)attributeEditorSectionController:(id <AVTAvatarAttributeEditorSectionController>)arg1 didSelectSectionItem:(id <AVTAvatarAttributeEditorSectionItem>)arg2;
@end

