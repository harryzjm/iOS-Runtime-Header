//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCFontName : NSObject
{
    NSString *_styleName;
    NSString *_fullName;
}

@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSString *styleName; // @synthesize styleName=_styleName;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (void)dealloc;
- (id)initWithStyleName:(id)arg1 fullName:(id)arg2;

@end

