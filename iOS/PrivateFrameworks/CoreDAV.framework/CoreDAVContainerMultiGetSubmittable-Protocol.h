//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVSubmittable-Protocol.h>

@class NSSet;

@protocol CoreDAVContainerMultiGetSubmittable <CoreDAVSubmittable>
@property(nonatomic) _Bool shouldIgnoreResponseErrors;
@property(readonly, nonatomic) NSSet *parsedContents;
@property(readonly, nonatomic) NSSet *deletedURLs;
@property(readonly, nonatomic) NSSet *missingURLs;
@end

