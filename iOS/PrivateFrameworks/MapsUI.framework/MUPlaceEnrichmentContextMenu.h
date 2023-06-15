//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MUPlaceEnrichmentAction;
@protocol MUPlaceEnrichmentActionHandler, MUPlaceEnrichmentSectionContextMenuDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceEnrichmentContextMenu : UIControl
{
    MUPlaceEnrichmentAction *_contextMenuAction;
    id <MUPlaceEnrichmentSectionContextMenuDelegate> _contextMenuDelegate;
    id <MUPlaceEnrichmentActionHandler> _enrichmentActionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MUPlaceEnrichmentActionHandler> enrichmentActionDelegate; // @synthesize enrichmentActionDelegate=_enrichmentActionDelegate;
@property(nonatomic) __weak id <MUPlaceEnrichmentSectionContextMenuDelegate> contextMenuDelegate; // @synthesize contextMenuDelegate=_contextMenuDelegate;
@property(retain, nonatomic) MUPlaceEnrichmentAction *contextMenuAction; // @synthesize contextMenuAction=_contextMenuAction;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

