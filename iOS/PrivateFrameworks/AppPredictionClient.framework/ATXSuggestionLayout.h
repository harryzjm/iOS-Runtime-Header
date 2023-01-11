//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/ATXSuggestionLayoutProtocol-Protocol.h>
#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface ATXSuggestionLayout : NSObject <ATXProtoBufWrapper, ATXSuggestionLayoutProtocol, NSSecureCoding, NSCopying>
{
    _Bool _isValidForSuggestionsWidget;
    _Bool _confidenceWarrantsSnappingOrNPlusOne;
    _Bool _isNPlusOne;
    _Bool _isLowConfidenceStackRotationForStaleStack;
    long long _layoutType;
    double _layoutScore;
    NSUUID *_uuid;
    NSUUID *_uuidOfHighestConfidenceSuggestion;
    NSArray *_oneByOneSuggestions;
    NSArray *_oneByTwoSuggestions;
    NSArray *_twoByTwoSuggestions;
    NSArray *_oneByFourSuggestions;
    NSArray *_twoByFourSuggestions;
    NSArray *_fourByFourSuggestions;
    NSString *_widgetUniqueId;
    unsigned long long _numWidgetsInStack;
}

+ (_Bool)supportsSecureCoding;
+ (id)uiLayoutTypesForStackLayoutSize:(unsigned long long)arg1;
+ (id)stringFromUILayoutType:(long long)arg1;
+ (id)maxSuggestionLayoutTypesForUILayoutType:(long long)arg1;
+ (id)minSuggestionLayoutTypesForUILayoutType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long numWidgetsInStack; // @synthesize numWidgetsInStack=_numWidgetsInStack;
@property(nonatomic) _Bool isLowConfidenceStackRotationForStaleStack; // @synthesize isLowConfidenceStackRotationForStaleStack=_isLowConfidenceStackRotationForStaleStack;
@property(retain, nonatomic) NSString *widgetUniqueId; // @synthesize widgetUniqueId=_widgetUniqueId;
@property(nonatomic) _Bool isNPlusOne; // @synthesize isNPlusOne=_isNPlusOne;
@property(nonatomic) _Bool confidenceWarrantsSnappingOrNPlusOne; // @synthesize confidenceWarrantsSnappingOrNPlusOne=_confidenceWarrantsSnappingOrNPlusOne;
@property(nonatomic) _Bool isValidForSuggestionsWidget; // @synthesize isValidForSuggestionsWidget=_isValidForSuggestionsWidget;
@property(readonly, nonatomic) NSArray *fourByFourSuggestions; // @synthesize fourByFourSuggestions=_fourByFourSuggestions;
@property(retain, nonatomic) NSArray *twoByFourSuggestions; // @synthesize twoByFourSuggestions=_twoByFourSuggestions;
@property(retain, nonatomic) NSArray *oneByFourSuggestions; // @synthesize oneByFourSuggestions=_oneByFourSuggestions;
@property(retain, nonatomic) NSArray *twoByTwoSuggestions; // @synthesize twoByTwoSuggestions=_twoByTwoSuggestions;
@property(retain, nonatomic) NSArray *oneByTwoSuggestions; // @synthesize oneByTwoSuggestions=_oneByTwoSuggestions;
@property(retain, nonatomic) NSArray *oneByOneSuggestions; // @synthesize oneByOneSuggestions=_oneByOneSuggestions;
@property(retain, nonatomic) NSUUID *uuidOfHighestConfidenceSuggestion; // @synthesize uuidOfHighestConfidenceSuggestion=_uuidOfHighestConfidenceSuggestion;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) double layoutScore; // @synthesize layoutScore=_layoutScore;
@property(readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
- (_Bool)isShortcutConversion;
- (id)jsonRawData;
- (id)arrayOfJSONFromSuggestionArray:(id)arg1;
- (int)_protoLayoutTypeFromLayoutType:(long long)arg1;
- (long long)_layoutTypeFromProtoLayoutType:(int)arg1;
- (id)proto;
- (id)initWithProto:(id)arg1;
- (id)encodeAsProto;
- (id)initWithProtoData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)checkAndReportDecodingFailureIfNeededForBOOL:(_Bool)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (_Bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (_Bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)minSuggestionListInLayout;
- (id)suggestionWithUUID:(id)arg1;
- (id)allSuggestionsInLayout;
@property(readonly, copy) NSString *description;
- (id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7 uuid:(id)arg8 layoutScore:(double)arg9 isValidForSuggestionsWidget:(_Bool)arg10 confidenceWarrantsSnappingOrNPlusOne:(_Bool)arg11 isNPlusOne:(_Bool)arg12 isLowConfidenceStackRotationForStaleStack:(_Bool)arg13 widgetUniqueId:(id)arg14 uuidOfHighestConfidenceSuggestion:(id)arg15 numWidgetsInStack:(unsigned long long)arg16;
- (id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7 uuid:(id)arg8;
- (id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
