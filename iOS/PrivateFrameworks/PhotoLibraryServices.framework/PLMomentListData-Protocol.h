//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLMomentRefreshable-Protocol.h>

@class NSArray, NSData, NSDate, NSObject, NSOrderedSet, NSString;
@protocol NSCopying, PLMomentData;

@protocol PLMomentListData <PLMomentRefreshable>
@property(retain, nonatomic) NSArray *userTitles;
@property(retain, nonatomic) NSOrderedSet *moments;
@property(nonatomic) short generationType;
@property(nonatomic) _Bool reverseLocationDataContainsLocation;
@property(nonatomic) _Bool reverseLocationDataIsValid;
@property(retain, nonatomic) NSData *reverseLocationData;
@property(nonatomic) int sortIndex;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(nonatomic) short granularityLevel;
@property(retain, nonatomic) NSDate *representativeDate;
@property(retain, nonatomic) NSDate *endDate;
@property(retain, nonatomic) NSDate *startDate;
- (void)addMomentToFront:(id <PLMomentData>)arg1;
- (void)removeMoments:(NSOrderedSet *)arg1;
- (void)addMoments:(NSOrderedSet *)arg1;
- (void)delete;
- (_Bool)isDeleted;

@optional
- (NSString *)momentListDebugDescription;
@end

