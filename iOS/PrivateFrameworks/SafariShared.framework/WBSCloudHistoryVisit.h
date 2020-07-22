//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WBSCloudHistoryVisitIdentifier;

@interface WBSCloudHistoryVisit : NSObject
{
    _Bool _loadSuccessful;
    _Bool _httpNonGet;
    WBSCloudHistoryVisitIdentifier *_visitIdentifier;
    NSString *_title;
    WBSCloudHistoryVisitIdentifier *_redirectSourceVisitIdentifier;
    WBSCloudHistoryVisit *_redirectSourceVisit;
    WBSCloudHistoryVisitIdentifier *_redirectDestinationVisitIdentifier;
    WBSCloudHistoryVisit *_redirectDestinationVisit;
}

@property(nonatomic) __weak WBSCloudHistoryVisit *redirectDestinationVisit; // @synthesize redirectDestinationVisit=_redirectDestinationVisit;
@property(copy, nonatomic) WBSCloudHistoryVisitIdentifier *redirectDestinationVisitIdentifier; // @synthesize redirectDestinationVisitIdentifier=_redirectDestinationVisitIdentifier;
@property(nonatomic) __weak WBSCloudHistoryVisit *redirectSourceVisit; // @synthesize redirectSourceVisit=_redirectSourceVisit;
@property(copy, nonatomic) WBSCloudHistoryVisitIdentifier *redirectSourceVisitIdentifier; // @synthesize redirectSourceVisitIdentifier=_redirectSourceVisitIdentifier;
@property(nonatomic, getter=wasHTTPNonGet) _Bool httpNonGet; // @synthesize httpNonGet=_httpNonGet;
@property(nonatomic, getter=loadWasSuccessful) _Bool loadSuccessful; // @synthesize loadSuccessful=_loadSuccessful;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) WBSCloudHistoryVisitIdentifier *visitIdentifier; // @synthesize visitIdentifier=_visitIdentifier;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithHistoryVisit:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
