//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSCloudHistoryVisitIdentifier : NSObject <NSCopying>
{
    unsigned long long _hash;
    NSString *_urlString;
    double _visitTime;
    WBSHistoryItem *_associatedHistoryItem;
    WBSHistoryVisit *_associatedHistoryVisit;
}

@property(retain, nonatomic) WBSHistoryVisit *associatedHistoryVisit; // @synthesize associatedHistoryVisit=_associatedHistoryVisit;
@property(retain, nonatomic) WBSHistoryItem *associatedHistoryItem; // @synthesize associatedHistoryItem=_associatedHistoryItem;
@property(readonly, nonatomic) double visitTime; // @synthesize visitTime=_visitTime;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLString:(id)arg1 visitTime:(double)arg2;

@end

