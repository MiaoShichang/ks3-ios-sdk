//
//  KSS3UploadPartRequest.h
//  KS3SDK
//
//  Created by JackWong on 12/15/14.
//  Copyright (c) 2014 kingsoft. All rights reserved.
//

#import "KSS3Request.h"
#import "KSS3MultipartUpload.h"
@interface KSS3UploadPartRequest : KSS3Request

@property (nonatomic, strong) NSString *key;

@property (nonatomic, assign) int32_t partNumber;


@property (nonatomic, strong) NSString *contentMD5;


@property (nonatomic, assign) BOOL generateMD5;


@property (nonatomic, strong) NSString *uploadId;


@property (nonatomic, strong) NSData *data;


@property (nonatomic, strong) NSInputStream *stream;

- (id)initWithMultipartUpload:(KSS3MultipartUpload *)multipartUpload;

@end