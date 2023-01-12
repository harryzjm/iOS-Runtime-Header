//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/NSObject-Protocol.h>

@class NSDate, NSString, TSKAnnotationAuthor;

@protocol TSKAnnotation <NSObject>
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *parentUUID;
@property(readonly, nonatomic) NSString *annotationUUID;
- (_Bool)isFloatingComment;
- (_Bool)isInDocument;
@end

