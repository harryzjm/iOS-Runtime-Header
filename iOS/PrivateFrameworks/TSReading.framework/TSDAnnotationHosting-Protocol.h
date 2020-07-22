//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>
#import <TSReading/TSKAnnotation-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSKCommand;
@protocol TSKModel;

@protocol TSDAnnotationHosting <NSObject, TSKAnnotation>
@property(nonatomic) id <TSKModel> model;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (void)commitText:(NSString *)arg1;
- (_Bool)isEqual:(id)arg1;

@optional
@property(copy, nonatomic) TSDCommentStorage *storage;
@property(readonly, nonatomic) NSString *changeTrackingString;
- (TSKCommand *)commandForDeletingComment;
@end

