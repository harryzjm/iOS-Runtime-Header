//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryMutableStyleManager-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSArray, NSObject, NSString, PXStoryRecipeManager, PXStoryStyleConfiguration, PXStoryStyleConfigurationList, PXStoryStyleSelectionDataSource, PXUpdater;
@protocol OS_dispatch_queue, PXAudioCueProvider, PXAudioCueSource, PXStoryColorGradingRepository, PXStoryErrorReporter, PXStoryStyle, PXStoryStyleProducer;

@interface PXStoryStyleManager <PXStoryMutableStyleManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>
{
    _Bool _isCurrentStyleFinal;
    _Bool _areSelectionDataSourceStylesFinal;
    _Bool _areStylesFinal;
    NSObject<OS_dispatch_queue> *_storyQueue;
    unsigned long long _changesOrigin;
    PXStoryRecipeManager *_recipeManager;
    id <PXStoryColorGradingRepository> _colorGradingRepository;
    id <PXStoryStyle> _currentStyle;
    unsigned long long _currentStyleAttributes;
    PXStoryStyleSelectionDataSource *_selectionDataSource;
    unsigned long long _selectionDataSourceStylesAttributes;
    double _selectionFocus;
    id <PXStoryErrorReporter> _errorReporter;
    PXUpdater *_updater;
    id <PXStoryStyleProducer> _styleProducer;
    PXStoryStyleConfigurationList *_styleConfigurationList;
    unsigned long long _stylesAttributes;
    id <PXAudioCueProvider> _cueProvider;
    id <PXAudioCueSource> _cueSource;
    long long _cueRequestID;
    PXStoryStyleConfiguration *_currentStyleInfo;
    NSArray *_predefinedStyleInfos;
    CDStruct_aa11df03 _styleOptions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *predefinedStyleInfos; // @synthesize predefinedStyleInfos=_predefinedStyleInfos;
@property(retain, nonatomic) PXStoryStyleConfiguration *currentStyleInfo; // @synthesize currentStyleInfo=_currentStyleInfo;
@property(nonatomic) long long cueRequestID; // @synthesize cueRequestID=_cueRequestID;
@property(retain, nonatomic) id <PXAudioCueSource> cueSource; // @synthesize cueSource=_cueSource;
@property(retain, nonatomic) id <PXAudioCueProvider> cueProvider; // @synthesize cueProvider=_cueProvider;
@property(nonatomic) _Bool areStylesFinal; // @synthesize areStylesFinal=_areStylesFinal;
@property(nonatomic) unsigned long long stylesAttributes; // @synthesize stylesAttributes=_stylesAttributes;
@property(retain, nonatomic) PXStoryStyleConfigurationList *styleConfigurationList; // @synthesize styleConfigurationList=_styleConfigurationList;
@property(readonly, nonatomic) CDStruct_aa11df03 styleOptions; // @synthesize styleOptions=_styleOptions;
@property(readonly, nonatomic) id <PXStoryStyleProducer> styleProducer; // @synthesize styleProducer=_styleProducer;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) id <PXStoryErrorReporter> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) double selectionFocus; // @synthesize selectionFocus=_selectionFocus;
@property(nonatomic) _Bool areSelectionDataSourceStylesFinal; // @synthesize areSelectionDataSourceStylesFinal=_areSelectionDataSourceStylesFinal;
@property(nonatomic) unsigned long long selectionDataSourceStylesAttributes; // @synthesize selectionDataSourceStylesAttributes=_selectionDataSourceStylesAttributes;
@property(readonly, nonatomic) PXStoryStyleSelectionDataSource *selectionDataSource; // @synthesize selectionDataSource=_selectionDataSource;
@property(readonly, nonatomic) _Bool isCurrentStyleFinal; // @synthesize isCurrentStyleFinal=_isCurrentStyleFinal;
@property(readonly, nonatomic) unsigned long long currentStyleAttributes; // @synthesize currentStyleAttributes=_currentStyleAttributes;
@property(readonly, nonatomic) id <PXStoryStyle> currentStyle; // @synthesize currentStyle=_currentStyle;
@property(readonly, nonatomic) id <PXStoryColorGradingRepository> colorGradingRepository; // @synthesize colorGradingRepository=_colorGradingRepository;
@property(readonly, nonatomic) PXStoryRecipeManager *recipeManager; // @synthesize recipeManager=_recipeManager;
@property(readonly, nonatomic) unsigned long long changesOrigin; // @synthesize changesOrigin=_changesOrigin;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateSelectionDataSourceStylesAttributes;
- (void)_invalidateSelectionDataSourceAttributes;
- (void)_updateSelectionDataSource;
- (void)_invalidateSelectionDataSource;
- (void)_updateCurrentStyleAttributes;
- (void)_invalidateCurrentStyleAttributes;
- (void)_updateCurrentStyle;
- (void)_updateCurrentStyleInfo;
- (void)_invalidateCurrentStyleInfo;
- (void)_handleCueSource:(id)arg1 error:(id)arg2 requestID:(long long)arg3;
- (void)_updateCueSource;
- (void)_invalidateCueSource;
- (void)_invalidateCurrentStyle;
- (void)_updateStylesAttributes;
- (void)_invalidateStylesAttributes;
- (void)_updatePredefinedStyleInfos;
- (void)_invalidatePredefinedStyleInfos;
- (void)_updateStyleConfigurationList;
- (void)_invalidateStyleConfigurationList;
- (void)_setNeedsUpdate;
- (void)setSelectionFocus:(double)arg1;
- (void)applyStyleAtIndex:(long long)arg1 fromDataSource:(id)arg2;
- (void)applyFocusedStyle;
- (void)applyFocusedStyleWithCustomizedSongResource:(id)arg1;
- (void)applyFocusedStyleWithCustomizedColorGradeKind:(long long)arg1;
- (void)didPerformChanges;
@property(readonly, nonatomic) long long focusedStyleIndex;
- (void)setSelectionDataSource:(id)arg1;
- (void)setIsCurrentStyleFinal:(_Bool)arg1;
- (void)setCurrentStyleAttributes:(unsigned long long)arg1;
- (void)setCurrentStyle:(id)arg1;
- (void)didEndChangeHandling;
- (void)performChanges:(CDUnknownBlockType)arg1 origin:(unsigned long long)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithRecipeManager:(id)arg1 errorReporter:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
