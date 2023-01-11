//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailComplicationPickerCellDelegate-Protocol.h>

@class NSMutableArray, NSString, NTKCFaceDetailComplicationPickerCell, NTKCFaceDetailComplicationsHiddenCell, NTKFaceView;
@protocol NTKCFaceDetailComplicationSectionDelegate;

@interface NTKCFaceDetailComplicationSectionController <NTKCFaceDetailComplicationPickerCellDelegate>
{
    id <NTKCFaceDetailComplicationSectionDelegate> _delegate;
    NTKFaceView *_faceView;
    NTKCFaceDetailComplicationPickerCell *_pickerCell;
    NTKCFaceDetailComplicationPickerCell *_dismissingPickerCell;
    NTKCFaceDetailComplicationsHiddenCell *_hiddenCell;
}

+ (_Bool)hasComplicationsForFace:(id)arg1;
@property(retain, nonatomic) NTKCFaceDetailComplicationsHiddenCell *hiddenCell; // @synthesize hiddenCell=_hiddenCell;
@property(retain, nonatomic) NTKCFaceDetailComplicationPickerCell *dismissingPickerCell; // @synthesize dismissingPickerCell=_dismissingPickerCell;
@property(retain, nonatomic) NTKCFaceDetailComplicationPickerCell *pickerCell; // @synthesize pickerCell=_pickerCell;
@property(retain, nonatomic) NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) __weak id <NTKCFaceDetailComplicationSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)complicationPickerCell:(id)arg1 didSelectComplication:(id)arg2;
- (void)_dequeuePickerCellForRow:(long long)arg1;
- (void)faceDidChange;
- (void)toggleRow:(long long)arg1 shouldScroll:(_Bool)arg2;
- (void)didSelectRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;
- (id)titleForHeader;
- (double)heightForRow:(long long)arg1;
- (void)_addComplication:(id)arg1;
- (void)_commonInit;
- (id)initWithTableView:(id)arg1 face:(id)arg2 faceView:(id)arg3 inGallery:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *rows; // @dynamic rows;
@property(readonly) Class superclass;

@end

