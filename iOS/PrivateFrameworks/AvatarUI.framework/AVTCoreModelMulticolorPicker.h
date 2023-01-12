//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreModelPicker-Protocol.h>

@class AVTCoreModelMulticolorAuxiliaryPicker, AVTCoreModelPairing, AVTCoreModelPickerOptions, NSArray, NSDictionary, NSString;

@interface AVTCoreModelMulticolorPicker : NSObject <AVTCoreModelPicker>
{
    _Bool _allowsRemoval;
    NSString *_identifier;
    NSString *_title;
    AVTCoreModelPickerOptions *_options;
    AVTCoreModelPairing *_pairing;
    AVTCoreModelMulticolorAuxiliaryPicker *_auxiliaryPicker;
    NSArray *_subpickers;
    NSArray *_subtitles;
    NSDictionary *_nestedPresetPickers;
    long long _initialState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowsRemoval; // @synthesize allowsRemoval=_allowsRemoval;
@property(readonly, nonatomic) long long initialState; // @synthesize initialState=_initialState;
@property(readonly, nonatomic) NSDictionary *nestedPresetPickers; // @synthesize nestedPresetPickers=_nestedPresetPickers;
@property(readonly, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, nonatomic) NSArray *subpickers; // @synthesize subpickers=_subpickers;
@property(readonly, nonatomic) AVTCoreModelMulticolorAuxiliaryPicker *auxiliaryPicker; // @synthesize auxiliaryPicker=_auxiliaryPicker;
@property(readonly, copy, nonatomic) AVTCoreModelPairing *pairing; // @synthesize pairing=_pairing;
@property(readonly, nonatomic) AVTCoreModelPickerOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subpickers:(id)arg3 subtitles:(id)arg4 nestedPresetPickers:(id)arg5 auxiliaryPicker:(id)arg6 initialState:(long long)arg7 allowsRemoval:(_Bool)arg8 options:(id)arg9;
- (id)initWithTitle:(id)arg1 subpickers:(id)arg2 subtitles:(id)arg3 nestedPresetPickers:(id)arg4 auxiliaryPicker:(id)arg5 initialState:(long long)arg6 allowsRemoval:(_Bool)arg7 options:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
