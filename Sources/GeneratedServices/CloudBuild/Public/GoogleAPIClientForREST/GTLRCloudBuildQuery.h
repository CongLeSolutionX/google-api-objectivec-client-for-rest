// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Build API (cloudbuild/v2)
// Description:
//   Creates and manages builds on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/cloud-build/docs/

#import <GoogleAPIClientForREST/GTLRQuery.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

#import "GTLRCloudBuildObjects.h"

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// refType

/**
 *  To fetch branches.
 *
 *  Value: "BRANCH"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBuildRefTypeBranch;
/**
 *  No type specified.
 *
 *  Value: "REF_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBuildRefTypeRefTypeUnspecified;
/**
 *  To fetch tags.
 *
 *  Value: "TAG"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBuildRefTypeTag;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Cloud Build query classes.
 */
@interface GTLRCloudBuildQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a Connection.
 *
 *  Method: cloudbuild.projects.locations.connections.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsCreate : GTLRCloudBuildQuery

/**
 *  Required. The ID to use for the Connection, which will become the final
 *  component of the Connection's resource name. Names must be unique
 *  per-project per-location. Allows alphanumeric characters and any of
 *  -._~%!$&'()*+,;=\@.
 */
@property(nonatomic, copy, nullable) NSString *connectionId;

/**
 *  Required. Project and location where the connection will be created. Format:
 *  `projects/ * /locations/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudBuild_Operation.
 *
 *  Creates a Connection.
 *
 *  @param object The @c GTLRCloudBuild_Connection to include in the query.
 *  @param parent Required. Project and location where the connection will be
 *    created. Format: `projects/ * /locations/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_Connection *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a single connection.
 *
 *  Method: cloudbuild.projects.locations.connections.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsDelete : GTLRCloudBuildQuery

/**
 *  The current etag of the connection. If an etag is provided and does not
 *  match the current etag of the connection, deletion will be blocked and an
 *  ABORTED error will be returned.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Required. The name of the Connection to delete. Format: `projects/ *
 *  /locations/ * /connections/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** If set, validate the request, but do not actually post it. */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudBuild_Operation.
 *
 *  Deletes a single connection.
 *
 *  @param name Required. The name of the Connection to delete. Format:
 *    `projects/ * /locations/ * /connections/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  FetchLinkableRepositories get repositories from SCM that are accessible and
 *  could be added to the connection.
 *
 *  Method: cloudbuild.projects.locations.connections.fetchLinkableRepositories
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsFetchLinkableRepositories : GTLRCloudBuildQuery

/**
 *  Required. The name of the Connection. Format: `projects/ * /locations/ *
 *  /connections/ *`.
 */
@property(nonatomic, copy, nullable) NSString *connection;

/** Number of results to return in the list. Default to 20. */
@property(nonatomic, assign) NSInteger pageSize;

/** Page start. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudBuild_FetchLinkableRepositoriesResponse.
 *
 *  FetchLinkableRepositories get repositories from SCM that are accessible and
 *  could be added to the connection.
 *
 *  @param connection Required. The name of the Connection. Format: `projects/ *
 *    /locations/ * /connections/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsFetchLinkableRepositories
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithConnection:(NSString *)connection;

@end

/**
 *  Gets details of a single connection.
 *
 *  Method: cloudbuild.projects.locations.connections.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsGet : GTLRCloudBuildQuery

/**
 *  Required. The name of the Connection to retrieve. Format: `projects/ *
 *  /locations/ * /connections/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBuild_Connection.
 *
 *  Gets details of a single connection.
 *
 *  @param name Required. The name of the Connection to retrieve. Format:
 *    `projects/ * /locations/ * /connections/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a resource. Returns an empty policy if
 *  the resource exists and does not have a policy set.
 *
 *  Method: cloudbuild.projects.locations.connections.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsGetIamPolicy : GTLRCloudBuildQuery

/**
 *  Optional. The maximum policy version that will be used to format the policy.
 *  Valid values are 0, 1, and 3. Requests specifying an invalid value will be
 *  rejected. Requests for policies with any conditional role bindings must
 *  specify version 3. Policies with no conditional role bindings may specify
 *  any valid value or leave the field unset. The policy in the response might
 *  use the policy version that you specified, or it might use a lower policy
 *  version. For example, if you specify version 3, but the policy has no
 *  conditional role bindings, the response uses version 1. To learn which
 *  resources support conditions in their IAM policies, see the [IAM
 *  documentation](https://cloud.google.com/iam/help/conditions/resource-policies).
 */
@property(nonatomic, assign) NSInteger optionsRequestedPolicyVersion;

/**
 *  REQUIRED: The resource for which the policy is being requested. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudBuild_Policy.
 *
 *  Gets the access control policy for a resource. Returns an empty policy if
 *  the resource exists and does not have a policy set.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsGetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Lists Connections in a given project and location.
 *
 *  Method: cloudbuild.projects.locations.connections.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsList : GTLRCloudBuildQuery

/** Number of results to return in the list. */
@property(nonatomic, assign) NSInteger pageSize;

/** Page start. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent, which owns this collection of Connections. Format:
 *  `projects/ * /locations/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Optional. If set to true, the response will return partial results when some
 *  regions are unreachable. If set to false, the response will fail if any
 *  region is unreachable.
 */
@property(nonatomic, assign) BOOL returnPartialSuccess;

/**
 *  Fetches a @c GTLRCloudBuild_ListConnectionsResponse.
 *
 *  Lists Connections in a given project and location.
 *
 *  @param parent Required. The parent, which owns this collection of
 *    Connections. Format: `projects/ * /locations/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a single connection.
 *
 *  Method: cloudbuild.projects.locations.connections.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsPatch : GTLRCloudBuildQuery

/**
 *  If set to true, and the connection is not found a new connection will be
 *  created. In this situation `update_mask` is ignored. The creation will
 *  succeed only if the input connection has all the necessary information (e.g
 *  a github_config with both user_oauth_token and installation_id properties).
 */
@property(nonatomic, assign) BOOL allowMissing;

/**
 *  The current etag of the connection. If an etag is provided and does not
 *  match the current etag of the connection, update will be blocked and an
 *  ABORTED error will be returned.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Immutable. The resource name of the connection, in the format
 *  `projects/{project}/locations/{location}/connections/{connection_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The list of fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudBuild_Operation.
 *
 *  Updates a single connection.
 *
 *  @param object The @c GTLRCloudBuild_Connection to include in the query.
 *  @param name Immutable. The resource name of the connection, in the format
 *    `projects/{project}/locations/{location}/connections/{connection_id}`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_Connection *)object
                           name:(NSString *)name;

@end

/**
 *  ProcessWebhook is called by the external SCM for notifying of events.
 *
 *  Method: cloudbuild.projects.locations.connections.processWebhook
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsProcessWebhook : GTLRCloudBuildQuery

/**
 *  Required. Project and location where the webhook will be received. Format:
 *  `projects/ * /locations/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Arbitrary additional key to find the matching repository for a webhook event
 *  if needed.
 */
@property(nonatomic, copy, nullable) NSString *webhookKey;

/**
 *  Fetches a @c GTLRCloudBuild_Empty.
 *
 *  ProcessWebhook is called by the external SCM for notifying of events.
 *
 *  @param object The @c GTLRCloudBuild_HttpBody to include in the query.
 *  @param parent Required. Project and location where the webhook will be
 *    received. Format: `projects/ * /locations/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsProcessWebhook
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_HttpBody *)object
                         parent:(NSString *)parent;

@end

/**
 *  Fetches read token of a given repository.
 *
 *  Method: cloudbuild.projects.locations.connections.repositories.accessReadToken
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesAccessReadToken : GTLRCloudBuildQuery

/**
 *  Required. The resource name of the repository in the format `projects/ *
 *  /locations/ * /connections/ * /repositories/ *`.
 */
@property(nonatomic, copy, nullable) NSString *repository;

/**
 *  Fetches a @c GTLRCloudBuild_FetchReadTokenResponse.
 *
 *  Fetches read token of a given repository.
 *
 *  @param object The @c GTLRCloudBuild_FetchReadTokenRequest to include in the
 *    query.
 *  @param repository Required. The resource name of the repository in the
 *    format `projects/ * /locations/ * /connections/ * /repositories/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesAccessReadToken
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_FetchReadTokenRequest *)object
                     repository:(NSString *)repository;

@end

/**
 *  Fetches read/write token of a given repository.
 *
 *  Method: cloudbuild.projects.locations.connections.repositories.accessReadWriteToken
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesAccessReadWriteToken : GTLRCloudBuildQuery

/**
 *  Required. The resource name of the repository in the format `projects/ *
 *  /locations/ * /connections/ * /repositories/ *`.
 */
@property(nonatomic, copy, nullable) NSString *repository;

/**
 *  Fetches a @c GTLRCloudBuild_FetchReadWriteTokenResponse.
 *
 *  Fetches read/write token of a given repository.
 *
 *  @param object The @c GTLRCloudBuild_FetchReadWriteTokenRequest to include in
 *    the query.
 *  @param repository Required. The resource name of the repository in the
 *    format `projects/ * /locations/ * /connections/ * /repositories/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesAccessReadWriteToken
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_FetchReadWriteTokenRequest *)object
                     repository:(NSString *)repository;

@end

/**
 *  Creates multiple repositories inside a connection.
 *
 *  Method: cloudbuild.projects.locations.connections.repositories.batchCreate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesBatchCreate : GTLRCloudBuildQuery

/**
 *  Required. The connection to contain all the repositories being created.
 *  Format: projects/ * /locations/ * /connections/ * The parent field in the
 *  CreateRepositoryRequest messages must either be empty or match this field.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudBuild_Operation.
 *
 *  Creates multiple repositories inside a connection.
 *
 *  @param object The @c GTLRCloudBuild_BatchCreateRepositoriesRequest to
 *    include in the query.
 *  @param parent Required. The connection to contain all the repositories being
 *    created. Format: projects/ * /locations/ * /connections/ * The parent
 *    field in the CreateRepositoryRequest messages must either be empty or
 *    match this field.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesBatchCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_BatchCreateRepositoriesRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a Repository.
 *
 *  Method: cloudbuild.projects.locations.connections.repositories.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesCreate : GTLRCloudBuildQuery

/**
 *  Required. The connection to contain the repository. If the request is part
 *  of a BatchCreateRepositoriesRequest, this field should be empty or match the
 *  parent specified there.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Required. The ID to use for the repository, which will become the final
 *  component of the repository's resource name. This ID should be unique in the
 *  connection. Allows alphanumeric characters and any of -._~%!$&'()*+,;=\@.
 */
@property(nonatomic, copy, nullable) NSString *repositoryId;

/**
 *  Fetches a @c GTLRCloudBuild_Operation.
 *
 *  Creates a Repository.
 *
 *  @param object The @c GTLRCloudBuild_Repository to include in the query.
 *  @param parent Required. The connection to contain the repository. If the
 *    request is part of a BatchCreateRepositoriesRequest, this field should be
 *    empty or match the parent specified there.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_Repository *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a single repository.
 *
 *  Method: cloudbuild.projects.locations.connections.repositories.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesDelete : GTLRCloudBuildQuery

/**
 *  The current etag of the repository. If an etag is provided and does not
 *  match the current etag of the repository, deletion will be blocked and an
 *  ABORTED error will be returned.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Required. The name of the Repository to delete. Format: `projects/ *
 *  /locations/ * /connections/ * /repositories/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** If set, validate the request, but do not actually post it. */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudBuild_Operation.
 *
 *  Deletes a single repository.
 *
 *  @param name Required. The name of the Repository to delete. Format:
 *    `projects/ * /locations/ * /connections/ * /repositories/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Fetch the list of branches or tags for a given repository.
 *
 *  Method: cloudbuild.projects.locations.connections.repositories.fetchGitRefs
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesFetchGitRefs : GTLRCloudBuildQuery

/** Optional. Number of results to return in the list. Default to 20. */
@property(nonatomic, assign) NSInteger pageSize;

/** Optional. Page start. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Type of refs to fetch
 *
 *  Likely values:
 *    @arg @c kGTLRCloudBuildRefTypeRefTypeUnspecified No type specified.
 *        (Value: "REF_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRCloudBuildRefTypeTag To fetch tags. (Value: "TAG")
 *    @arg @c kGTLRCloudBuildRefTypeBranch To fetch branches. (Value: "BRANCH")
 */
@property(nonatomic, copy, nullable) NSString *refType;

/**
 *  Required. The resource name of the repository in the format `projects/ *
 *  /locations/ * /connections/ * /repositories/ *`.
 */
@property(nonatomic, copy, nullable) NSString *repository;

/**
 *  Fetches a @c GTLRCloudBuild_FetchGitRefsResponse.
 *
 *  Fetch the list of branches or tags for a given repository.
 *
 *  @param repository Required. The resource name of the repository in the
 *    format `projects/ * /locations/ * /connections/ * /repositories/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesFetchGitRefs
 */
+ (instancetype)queryWithRepository:(NSString *)repository;

@end

/**
 *  Gets details of a single repository.
 *
 *  Method: cloudbuild.projects.locations.connections.repositories.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesGet : GTLRCloudBuildQuery

/**
 *  Required. The name of the Repository to retrieve. Format: `projects/ *
 *  /locations/ * /connections/ * /repositories/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBuild_Repository.
 *
 *  Gets details of a single repository.
 *
 *  @param name Required. The name of the Repository to retrieve. Format:
 *    `projects/ * /locations/ * /connections/ * /repositories/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists Repositories in a given connection.
 *
 *  Method: cloudbuild.projects.locations.connections.repositories.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesList : GTLRCloudBuildQuery

/**
 *  A filter expression that filters resources listed in the response.
 *  Expressions must follow API improvement proposal
 *  [AIP-160](https://google.aip.dev/160). e.g.
 *  `remote_uri:"https://github.com*"`.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** Number of results to return in the list. */
@property(nonatomic, assign) NSInteger pageSize;

/** Page start. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent, which owns this collection of Repositories. Format:
 *  `projects/ * /locations/ * /connections/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Optional. If set to true, the response will return partial results when some
 *  regions are unreachable. If set to false, the response will fail if any
 *  region is unreachable.
 */
@property(nonatomic, assign) BOOL returnPartialSuccess;

/**
 *  Fetches a @c GTLRCloudBuild_ListRepositoriesResponse.
 *
 *  Lists Repositories in a given connection.
 *
 *  @param parent Required. The parent, which owns this collection of
 *    Repositories. Format: `projects/ * /locations/ * /connections/ *`.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsRepositoriesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy. Can return `NOT_FOUND`, `INVALID_ARGUMENT`, and
 *  `PERMISSION_DENIED` errors.
 *
 *  Method: cloudbuild.projects.locations.connections.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsSetIamPolicy : GTLRCloudBuildQuery

/**
 *  REQUIRED: The resource for which the policy is being specified. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudBuild_Policy.
 *
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy. Can return `NOT_FOUND`, `INVALID_ARGUMENT`, and
 *  `PERMISSION_DENIED` errors.
 *
 *  @param object The @c GTLRCloudBuild_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified resource. If the
 *  resource does not exist, this will return an empty set of permissions, not a
 *  `NOT_FOUND` error. Note: This operation is designed to be used for building
 *  permission-aware UIs and command-line tools, not for authorization checking.
 *  This operation may "fail open" without warning.
 *
 *  Method: cloudbuild.projects.locations.connections.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsConnectionsTestIamPermissions : GTLRCloudBuildQuery

/**
 *  REQUIRED: The resource for which the policy detail is being requested. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudBuild_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified resource. If the
 *  resource does not exist, this will return an empty set of permissions, not a
 *  `NOT_FOUND` error. Note: This operation is designed to be used for building
 *  permission-aware UIs and command-line tools, not for authorization checking.
 *  This operation may "fail open" without warning.
 *
 *  @param object The @c GTLRCloudBuild_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsConnectionsTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Gets information about a location.
 *
 *  Method: cloudbuild.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsGet : GTLRCloudBuildQuery

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBuild_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: cloudbuild.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsList : GTLRCloudBuildQuery

/**
 *  A filter to narrow down results to a preferred subset. The filtering
 *  language accepts strings like `"displayName=tokyo"`, and is documented in
 *  more detail in [AIP-160](https://google.aip.dev/160).
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The maximum number of results to return. If not set, the service selects a
 *  default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token received from the `next_page_token` field in the response. Send
 *  that page token to receive the subsequent page.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudBuild_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of `1`, corresponding to
 *  `Code.CANCELLED`.
 *
 *  Method: cloudbuild.projects.locations.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsOperationsCancel : GTLRCloudBuildQuery

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBuild_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of `1`, corresponding to
 *  `Code.CANCELLED`.
 *
 *  @param object The @c GTLRCloudBuild_CancelOperationRequest to include in the
 *    query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsOperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRCloudBuild_CancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: cloudbuild.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBuildCloudPlatform
 */
@interface GTLRCloudBuildQuery_ProjectsLocationsOperationsGet : GTLRCloudBuildQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBuild_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudBuildQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
