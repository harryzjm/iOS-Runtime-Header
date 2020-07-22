//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSString;

@interface MPStoreContentReport : NSObject <NSCopying>
{
    NSString *_userID;
    NSString *_contentID;
    long long _concernItemType;
    NSString *_commentText;
    NSString *_aucType;
    NSString *_concernTypeID;
    NSString *_displayText;
}

@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(copy, nonatomic) NSString *concernTypeID; // @synthesize concernTypeID=_concernTypeID;
@property(copy, nonatomic) NSString *aucType; // @synthesize aucType=_aucType;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(nonatomic) long long concernItemType; // @synthesize concernItemType=_concernItemType;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
