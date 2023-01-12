//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ARPHomeControlCorrelationUtilities, ARPHomeControlSuggester, NSString;

@interface ARPHomeControlNextActionCorrelationTask : NSObject
{
    NSString *_file;
    ARPHomeControlCorrelationUtilities *_utilities;
    ARPHomeControlSuggester *_suggester;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ARPHomeControlSuggester *suggester; // @synthesize suggester=_suggester;
@property(retain, nonatomic) ARPHomeControlCorrelationUtilities *utilities; // @synthesize utilities=_utilities;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
- (void)execute;
- (id)initWithCorrelationsFile:(id)arg1;

@end
