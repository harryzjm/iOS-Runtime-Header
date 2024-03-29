//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAnnotation, PDFAKAnnotationAdaptorPrivate, PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFAKAnnotationAdaptor : NSObject
{
    PDFAKAnnotationAdaptorPrivate *_private;
}

+ (id)_pdfAnnotationInstanceForAKAnnotation:(id)arg1;
+ (Class)_akAnnotationSubclassForWidgetFieldType:(id)arg1;
+ (id)_akAnnotationInstanceForPDFAnnotationSubtype:(id)arg1 withOptionalWidgetFieldType:(id)arg2;
+ (id)newPDFAnnotationFromAKAnnotation:(id)arg1;
+ (id)annotationAdaptorWithPDFAnnotation:(id)arg1 andCGPDFAnnotation:(struct CGPDFAnnotation *)arg2 andPDFDictionary:(struct CGPDFDictionary *)arg3;
- (void).cxx_destruct;
- (id)_colorFromColorOrArray:(id)arg1;
- (void)_syncChildAnnotationForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncInkPathForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncCornerRadiusForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_updateDashedPatternForStrokeWidth:(double)arg1 isDashed:(_Bool)arg2;
- (void)_syncDashedForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncArrowHeadStyleForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncColorForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncStrokeWidthForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncEndPointForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncStartPointForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncContentsForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncAnnotationTextForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncModificationDateForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncAuthorForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_invalidateAppearanceStreamForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncBoundingRectangleForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingAnnotation;
- (void)_startObservingAnnotation;
- (void)_syncEverythingToPDFAnnotation;
- (void)_syncAdditionalAction:(id)arg1;
- (void)_syncAction:(id)arg1;
- (void)_syncWidgetValue:(id)arg1;
- (void)_syncWidgetTextLabelUI:(id)arg1;
- (void)_syncWidgetOptions:(id)arg1;
- (void)_syncWidgetMaxLen:(unsigned long long)arg1;
- (void)_syncWidgetAppearance:(id)arg1;
- (void)_syncWidgetFieldFlags:(unsigned long long)arg1;
- (void)_syncWidgetDefaultValue:(id)arg1;
- (void)_syncTextLabel:(id)arg1;
- (void)_syncPopup:(id)arg1;
- (void)_syncParent:(id)arg1;
- (void)_syncOpen:(_Bool)arg1;
- (void)_syncIconName:(id)arg1;
- (void)_syncLineEndingStyles:(id)arg1;
- (void)_syncLinePoints:(id)arg1;
- (void)_syncInklist:(id)arg1;
- (void)_syncHighlightingMode:(id)arg1;
- (void)_syncDestination:(id)arg1;
- (void)_syncQuadding:(long long)arg1;
- (void)_syncDefaultAppearance:(id)arg1;
- (void)_syncAppleExtras:(id)arg1;
- (void)_syncRect:(struct CGRect)arg1;
- (void)_syncPage:(id)arg1;
- (void)_syncName:(id)arg1;
- (void)_syncDate:(id)arg1;
- (void)_syncFlags:(unsigned long long)arg1;
- (void)_syncContents:(id)arg1;
- (void)_syncInteriorColor:(id)arg1;
- (void)_syncColor:(id)arg1;
- (void)_syncBorderStyle:(id)arg1;
- (void)_syncBorder:(id)arg1;
- (void)_syncAppearanceState:(id)arg1;
- (void)_syncAppearanceDictionaryUpdatingEditsDisableAppearanceOverride:(_Bool)arg1;
- (void)_syncEverythingToAKAnnotation;
- (void)_syncWidgetFieldType:(id)arg1;
- (void)_syncSubtype:(id)arg1;
- (void)invalidateAppearanceStream;
- (void)didReplaceAllValuesWithNewDictionary:(id)arg1 andOldDictionary:(id)arg2;
- (void)didRemoveValueForAnnotationKey:(id)arg1;
- (void)didSetValue:(id)arg1 forAnnotationKey:(id)arg2;
@property(readonly, nonatomic) AKAnnotation *akAnnotation;
@property(readonly, nonatomic) __weak PDFAnnotation *pdfAnnotation;
- (void)_teardown;
- (void)teardown;
- (void)dealloc;
- (id)initWithPDFAnnotation:(id)arg1 andAKAnnotation:(id)arg2;

@end

