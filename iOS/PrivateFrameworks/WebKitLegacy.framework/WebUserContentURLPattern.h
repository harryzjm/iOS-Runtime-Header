//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject
{
    WebUserContentURLPatternPrivate *_private;
}

- (_Bool)matchesURL:(id)arg1;
- (_Bool)matchesSubdomains;
- (id)host;
- (id)scheme;
- (_Bool)isValid;
- (void)dealloc;
- (id)initWithPatternString:(id)arg1;

@end

