//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NWConcrete_nw_http_field, NWConcrete_nw_http_fields;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_http_response : NSObject
{
    NWConcrete_nw_http_field *status_field;
    char *reason_phrase;
    NWConcrete_nw_http_fields *fields;
    unsigned int reason_phrase_is_const:1;
}

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

