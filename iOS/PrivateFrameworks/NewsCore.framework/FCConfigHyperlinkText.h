//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCConfigHyperlinkText : NSObject
{
    NSString *_text;
    NSArray *_links;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 links:(id)arg2;
- (id)initWithConfigDictionary:(id)arg1;

@end
