//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSURL, PSUIAppDescription;

@interface PSUIAppDescriptionStoreResponse : NSObject
{
    PSUIAppDescription *_partialAppDescription;
    NSURL *_iconURL;
    NSURL *_installURL;
}

@property(retain, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) PSUIAppDescription *partialAppDescription; // @synthesize partialAppDescription=_partialAppDescription;
- (void).cxx_destruct;

@end

