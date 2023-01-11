//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CCVegaRenderer, CCVegaWorker, CCVegaWorkerClient, NSArray, NSCalendar, NSDictionary, NSLayoutConstraint, NSLocale, NSMutableSet, NSObject, NSString, UIAccessibilityElement;
@protocol CCChartViewDelegate;

@interface CCChartView : UIView
{
    CCVegaWorker *_worker;
    CCVegaWorkerClient *_workerClient;
    CCVegaRenderer *_renderer;
    NSString *_baseConfigType;
    NSString *_rendererType;
    NSString *_config;
    NSDictionary *_configDictionary;
    NSString *_spec;
    NSDictionary *_specDictionary;
    double _zoomFactor;
    NSArray *_legacyData;
    NSMutableSet *_knownNamedDatasets;
    _Bool _preventGestures;
    _Bool _caUpdateFromBackground;
    NSLocale *_locale;
    NSCalendar *_calendar;
    _Bool _didCustomizeLocale;
    _Bool _didCustomizeCalendar;
    double _rendererWidth;
    double _rendererHeight;
    unsigned long long _translatesChartSizeIntoConstraints;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSObject<CCChartViewDelegate> *delegate;
    UIAccessibilityElement *_accessibilityDataSeriesElement;
}

+ (id)compileSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3 expressionFunctionNames:(id)arg4 error:(id *)arg5;
+ (id)compileSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3 expressionFunctionNames:(id)arg4 error:(id *)arg5;
+ (id)configForBaseConfigType:(id)arg1;
+ (void)preloadFrameworkAssets;
+ (id)unwrapJSValue:(id)arg1;
+ (void)registerExpressionFunction:(CDUnknownBlockType)arg1 withName:(id)arg2;
+ (id)getBenchmarkRecords;
+ (id)dictionaryFromJSONString:(id)arg1;
+ (id)JSONStringFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain) UIAccessibilityElement *accessibilityDataSeriesElement; // @synthesize accessibilityDataSeriesElement=_accessibilityDataSeriesElement;
@property __weak NSObject<CCChartViewDelegate> *delegate; // @synthesize delegate;
- (long long)accessibilityContainerType;
@property(retain) NSArray *accessibilityDataSeriesElements;
- (void)setAccessibilityElements:(id)arg1;
- (id)accessibilityElements;
- (void)removeListener:(id)arg1 fromSignalWithName:(id)arg2;
- (id)addListener:(CDUnknownBlockType)arg1 toSignalWithName:(id)arg2;
- (void)setSignalWithName:(id)arg1 toValue:(id)arg2;
- (id)getSignalWithName:(id)arg1;
- (void)registerExpressionFunction:(CDUnknownBlockType)arg1 withName:(id)arg2;
- (void)registerLocalExpressionFunction:(CDUnknownBlockType)arg1 withName:(id)arg2;
- (id)renderToImageWithType:(unsigned long long)arg1;
@property(readonly) struct CGImage *CGImage;
- (void)changeConstraints;
@property(nonatomic) unsigned long long translatesChartSizeIntoConstraints;
@property(nonatomic) double contentScaleFactor;
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3;
- (void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2;
- (void)setNamedDataset:(id)arg1 rows:(id)arg2;
- (void)setDefaultDataset:(id)arg1;
@property(retain, nonatomic) NSArray *data;
- (void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3 rendererType:(id)arg4;
- (void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3;
- (void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2;
- (void)setSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3 rendererType:(id)arg4;
- (void)setSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3;
- (void)setSpec:(id)arg1 config:(id)arg2;
@property(retain) NSDictionary *configDictionary;
@property(retain) NSString *config;
@property(retain) NSDictionary *specDictionary;
@property(retain) NSString *spec;
@property(nonatomic) double zoomFactor;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseHoverGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)triggerMouseEvent:(id)arg1 type:(id)arg2 setConsumed:(_Bool)arg3;
- (void)triggerMouseEvent:(id)arg1 type:(id)arg2;
- (id)eventToMouseEvent:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)localizedStringNamed:(id)arg1;
- (id)colorNamed:(id)arg1;
- (id)dynamicColorNamed:(id)arg1;
- (void)rendererDidUpdate;
- (id)loadChartDataFromURL:(id)arg1 error:(id *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)reinitializeRenderer;
- (void)lazilyInitializeRenderer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)render;
@property(retain, nonatomic) NSCalendar *calendar;
@property(retain, nonatomic) NSLocale *locale;
@property(retain, nonatomic) NSString *rendererType;
@property(retain, nonatomic) NSString *baseConfig;
@property(nonatomic) _Bool CATransactionFromBackgroundThread;
- (void)refreshLocaleAndCalendar;
- (void)setupWithSpecDictionary:(id)arg1 options:(id)arg2;
- (void)setupWithSpecDictionary:(id)arg1;
- (void)setupWithSpec:(id)arg1;
- (void)setupWithSpec:(id)arg1 options:(id)arg2;
- (void)initialize;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3;
- (id)initWithSpec:(id)arg1 config:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRenderer:(id)arg1;
- (id)renderer;

@end
