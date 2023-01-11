//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDetectorsUI/UIActionSheetDelegate-Protocol.h>

@class BCSBusinessQueryService, DDActionController, NSMapTable, NSOperationQueue, NSString;
@protocol DDDetectionControllerDelegate, OS_dispatch_queue;

@interface DDDetectionController : NSObject <UIActionSheetDelegate>
{
    NSOperationQueue *_fullScannerQueue;
    NSOperationQueue *_urlScannerQueue;
    NSObject<OS_dispatch_queue> *_protectQueue;
    NSMapTable *_containerToOperationsTable;
    NSMapTable *_containerToResultsTable;
    NSMapTable *_containerToContextsTable;
    DDActionController *_actionController;
    BCSBusinessQueryService *_bizService;
    NSObject<DDDetectionControllerDelegate> *_delegate;
}

+ (id)lightUnderlineColorFromTextColor:(id)arg1;
+ (id)filterResults:(id)arg1 forTypes:(unsigned long long)arg2 referenceDate:(id)arg3 referenceTimeZone:(id)arg4;
+ (unsigned long long)allPublicTypes;
+ (id)barcodeContext:(id)arg1 preview:(_Bool)arg2 contact:(id)arg3 ics:(id)arg4;
+ (_Bool)_shouldConsiderResultForCoreRecents:(struct __DDResult *)arg1;
+ (CDUnknownBlockType)messagesActionHandler;
+ (void)setMessagesActionHandler:(CDUnknownBlockType)arg1;
+ (id)tapAndHoldSchemes;
+ (id)sharedController;
+ (id)updateContext:(id)arg1 forResult:(struct __DDResult *)arg2 atIndex:(unsigned long long)arg3 ofStorage:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<DDDetectionControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BCSBusinessQueryService *_bizService; // @synthesize _bizService;
- (id)barcodePreviewActionForContext:(id)arg1 URL:(id)arg2 result:(struct __DDResult *)arg3 contact:(id)arg4 ics:(id)arg5;
- (id)barcodeActionsForContext:(id)arg1 URL:(id)arg2 result:(struct __DDResult *)arg3 contact:(id)arg4 ics:(id)arg5;
- (id)_businessItemForNumber:(id)arg1 messageable:(_Bool *)arg2;
- (_Bool)_phoneNumberIsABusinessNumber:(id)arg1 messageable:(_Bool *)arg2;
- (id)_phoneNumberFromResult:(struct __DDResult *)arg1;
- (_Bool)_checkIfBusinessWithResult:(struct __DDResult *)arg1 messageable:(_Bool *)arg2;
- (_Bool)_checkIfBusinessWithURL:(id)arg1 messageable:(_Bool *)arg2;
- (_Bool)_shouldImmediatelyShowActionSheetForURL:(id)arg1;
- (id)_ensureURLIsURL:(id)arg1;
- (_Bool)_shouldImmediatelyShowActionSheetForCoreResult:(struct __DDResult *)arg1;
- (void)_cacheBusinessPhoneNumber:(id)arg1;
- (void)_interactionDidStartForResult:(struct __DDResult *)arg1;
- (void)_interactionDidStartForURL:(id)arg1;
- (struct __DDResult *)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id *)arg3;
- (struct __DDResult *)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id *)arg3;
- (void)interactionDidStartForResult:(struct __DDResult *)arg1;
- (void)interactionDidStartForURL:(id)arg1;
- (_Bool)shouldIgnoreMessageActionForURL:(id)arg1;
- (_Bool)shouldImmediatelyLaunchDefaultActionForResult:(struct __DDResult *)arg1;
- (_Bool)shouldImmediatelyLaunchDefaultActionForURL:(id)arg1;
- (void)cancelAction;
- (_Bool)actionIsCancellable;
- (_Bool)isPerformingAction;
- (void)performAction:(id)arg1 fromView:(id)arg2 alertController:(id)arg3 interactionDelegate:(id)arg4;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2 interactionDelegate:(id)arg3;
- (void)performAction:(id)arg1 inView:(id)arg2 interactionDelegate:(id)arg3;
- (id)actionsForResult:(struct __DDResult *)arg1 context:(id)arg2;
- (void)_doURLification:(id)arg1;
- (void)containerWillBeRemoved:(id)arg1;
- (void)cancelURLificationForContainer:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3;
- (void)_startCoalescedURLification:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1 clearPreviousResults:(_Bool)arg2;
- (id)_newOperationForContainer:(id)arg1;
- (void)resetResultsForContainer:(id)arg1;
- (void)_commonResetResultsForContainer:(id)arg1;
- (void)_resetStoredResultsForContainer:(id)arg1;
- (id)copyContextForContainer:(id)arg1;
- (void)setContext:(id)arg1 forContainer:(id)arg2;
- (void)setResults:(struct __CFArray *)arg1 forContainer:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2;
- (id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (struct __DDResult *)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id *)arg4;
- (id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)attributedTitleForResult:(struct __DDResult *)arg1 updaterBlock:(CDUnknownBlockType)arg2;
- (id)attributedTitleForURL:(id)arg1 updaterBlock:(CDUnknownBlockType)arg2;
- (id)titleForURL:(id)arg1 results:(id)arg2 context:(id)arg3;
- (id)defaultActionForURL:(id)arg1 results:(id)arg2 context:(id)arg3;
- (id)actionsForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5;
- (struct __DDResult *)resultForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 extendedContext:(id *)arg6;
- (struct __DDResult *)_resultForURL:(id)arg1 withResults:(id)arg2 context:(id *)arg3;
- (struct __DDResult *)_resultForIdentifier:(id)arg1 withResults:(id)arg2 context:(id *)arg3;
- (id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)actionsForURL:(id)arg1;
- (struct __DDResult *)resultForDOMNode:(id)arg1 forFrame:(id)arg2;
- (struct __DDResult *)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id *)arg3;
- (id)_plainTextAugmentedContext:(id)arg1 withFrame:(id)arg2;
- (_Bool)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;
- (void)frameWillBeRemoved:(id)arg1;
- (void)cancelURLificationForFrame:(id)arg1;
- (void)resetResultsForFrame:(id)arg1;
- (void)setContext:(id)arg1 forFrame:(id)arg2;
- (void)setResults:(struct __CFArray *)arg1 forFrame:(id)arg2;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3;
- (id)preferredTextAttributesForLinkAtCharacterIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (_Bool)shouldUseLightStyleAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 moreHighlight:(_Bool *)arg3;
- (void)interactionDidStartAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (id)_URLForLinkAttributeValue:(id)arg1;
- (id)attributedTitleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 updaterBlock:(CDUnknownBlockType)arg3;
- (id)titleForResult:(struct __DDResult *)arg1 subResult:(struct __DDResult *)arg2 withURL:(id)arg3 context:(id)arg4;
- (id)defaultActionAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)titleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)actionsAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)_applyBlock:(CDUnknownBlockType)arg1 withResultsAtIndex:(unsigned long long)arg2 ofStorage:(id)arg3 context:(id)arg4;
- (_Bool)shouldImmediatelyLaunchDefaultActionForTapAndHoldAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (_Bool)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (id)_resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 subResult:(id *)arg3 url:(id *)arg4 effectiveRange:(struct _NSRange *)arg5;
- (id)linkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (struct __DDResult *)resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (id)_subResultAtIndex:(unsigned long long)arg1 ofResult:(id)arg2;
- (void)resetResultsForTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
