//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class DVTExtension;

@interface DVTPlugInLocalizedString : NSString
{
    NSString *_key;
    DVTExtension *_extension;
    NSString *_value;
}

- (void).cxx_destruct;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)_populate;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 forExtension:(id)arg2;

@end
