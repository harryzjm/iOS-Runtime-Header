//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface WFDeferredLocalizedString : NSString
{
    NSString *_localizedValue;
    NSString *_backingStore;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *backingStore; // @synthesize backingStore=_backingStore;
@property(copy, nonatomic) NSString *localizedValue; // @synthesize localizedValue=_localizedValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

@end
