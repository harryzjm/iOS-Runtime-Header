//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter
{
    NSString *_template;
}

@property(copy, nonatomic) NSString *template; // @synthesize template=_template;
- (void).cxx_destruct;
- (void)updateDateFormat;
- (id)notificationCenter;
- (id)initWithTemplate:(id)arg1;
- (void)dealloc;

@end

