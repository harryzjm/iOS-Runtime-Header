//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSString;

@interface AKStatistics : NSObject
{
    NSString *_documentType;
    NSString *_clientPrefix;
    NSCountedSet *_annotationsCounts;
}

+ (id)nameForAnnotation:(id)arg1;
+ (id)nameForClassName:(id)arg1;
@property(retain, nonatomic) NSCountedSet *annotationsCounts; // @synthesize annotationsCounts=_annotationsCounts;
@property(retain, nonatomic) NSString *clientPrefix; // @synthesize clientPrefix=_clientPrefix;
@property(retain, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
- (void).cxx_destruct;
- (void)logDocumentSaved;
- (void)logShapeDetectionHUDPickedShape:(id)arg1;
- (void)logShapeDetectionHUDShown;
- (void)logInkAnnotationStrokeAdded:(id)arg1;
- (void)logAnnotationAdded:(id)arg1;
- (void)resetLogging;

@end
