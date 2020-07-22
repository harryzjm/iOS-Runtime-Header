//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol CKAssociatedMessageTranscriptCellDelegate;

@interface CKAssociatedMessageTranscriptCell
{
    id <CKAssociatedMessageTranscriptCellDelegate> _delegate;
    UIView *_associatedItemView;
    double _cumulativeAssociatedOffset;
    struct CGSize _size;
    struct CGSize _parentSize;
    struct IMAssociatedMessageGeometryDescriptor _geometryDescriptor;
}

@property(nonatomic) double cumulativeAssociatedOffset; // @synthesize cumulativeAssociatedOffset=_cumulativeAssociatedOffset;
@property(nonatomic) struct CGSize parentSize; // @synthesize parentSize=_parentSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct IMAssociatedMessageGeometryDescriptor geometryDescriptor; // @synthesize geometryDescriptor=_geometryDescriptor;
@property(retain, nonatomic) UIView *associatedItemView; // @synthesize associatedItemView=_associatedItemView;
@property(nonatomic) __weak id <CKAssociatedMessageTranscriptCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)prepareForReuse;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)associatedViewFrame:(struct CGRect)arg1 inContainerFrame:(struct CGRect)arg2;
- (void)layoutSubviewsForAlignmentContents;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)failureButtonAdjustsContentAlignmentRect;
- (_Bool)hidesCheckmark;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureForChatItem:(id)arg1;

@end

