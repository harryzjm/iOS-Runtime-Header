//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UIWebPDFLinkAction : NSObject
{
    int type;
    NSString *title;
    CDUnknownBlockType handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
@property(nonatomic) int type; // @synthesize type;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void)dealloc;

@end

