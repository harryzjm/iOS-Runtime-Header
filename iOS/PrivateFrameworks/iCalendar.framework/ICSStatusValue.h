//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICSStatusValue
{
    NSString *_statusString;
}

+ (id)statusTypeFromCode:(int)arg1 statusString:(id)arg2;
+ (id)statusTypeFromCode:(int)arg1;
+ (id)statusValueFromICSString:(id)arg1;
@property(retain) NSString *statusString; // @synthesize statusString=_statusString;
- (void).cxx_destruct;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
